const faturamento = {
  faturamento_diario: [
    { valor: 120.15 },
    { valor: 80.25 },
    { valor: 100 },
    { valor: 254.0 },
    { valor: 510.40 },
    { valor: 0 },
    { valor: 300.95 },
  ]
};

function calculateMinRevenue(dailyRevenue) {
  let minRevenue = Number.MAX_VALUE;
  dailyRevenue.forEach(revenue => {
    if (revenue > 0 && revenue < minRevenue) {
      minRevenue = revenue;
    }
  });
  return minRevenue;
}

function calculateMaxRevenue(dailyRevenue) {
  let maxRevenue = Number.MIN_VALUE;
  dailyRevenue.forEach(revenue => {
    if (revenue > maxRevenue) {
      maxRevenue = revenue;
    }
  });
  return maxRevenue;
}

function calculateAverageRevenue(dailyRevenue) {
  let totalRevenue = 0;
  let daysWithRevenue = 0;
  dailyRevenue.forEach(revenue => {
    if (revenue > 0) {
      totalRevenue += revenue;
      daysWithRevenue++;
    }
  });
  return daysWithRevenue > 0 ? totalRevenue / daysWithRevenue : 0;
}

function countDaysAboveAverage(dailyRevenue, averageRevenue) {
  let daysAboveAverage = 0;
  dailyRevenue.forEach(revenue => {
    if (revenue > averageRevenue) {
      daysAboveAverage++;
    }
  });
  return daysAboveAverage;
}

function main() {
  const dailyRevenue = faturamento.faturamento_diario.map(entry => entry.valor);

  const minRevenue = calculateMinRevenue(dailyRevenue);
  const maxRevenue = calculateMaxRevenue(dailyRevenue);
  const averageRevenue = calculateAverageRevenue(dailyRevenue);
  const daysAboveAverage = countDaysAboveAverage(dailyRevenue, averageRevenue);

  console.log("Menor valor de faturamento ocorrido em um dia do mes: " + minRevenue);
  console.log("Maior valor de faturamento ocorrido em um dia do mes: " + maxRevenue);
  console.log("Numero de dias com faturamento superior a media mensal: " + daysAboveAverage);

}

main();
